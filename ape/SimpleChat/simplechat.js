/**
 * @author shinpei
 */

function rand_chars(){
	 var keylist="abcdefghijklmnopqrstuvwxyz"
	 var temp=''
	 var plength=5;
	 for (i=0;i<plength;i++){
		 temp+=keylist.charAt(Math.floor(Math.random()*keylist.length))
	}
	return temp;
}
 APE.SimpleChat = new Class({
 	Extends: APE.Client,
 	Implements: Options,
 	
 	options:{
 		container: null,
 		logs_limit: 10,
 		container: document.body
 	},
 	
 	initialize: function(options){
 		this.setOptions(options);
 		this.options.name = rand_chars();
 		this.elems = {};
 		this.currentPipe = null;
 		this.logging = true;
		
 		this.addEvent('load', this.start);	
 		this.addEvent('ready', this.createChat);
		this.addEvent('multiPipeCreate', this.createPipe);
		this.addEvent('userJoin', this.createUser);
		this.addEvent('userLeft', this.deleteUser);
	
		//this.addEvent('uniPipeCreate', this.createPipe);
 		//this.onRaw('data', this.rawData);
 		//this.onCmd('send', this.cmdSend); 		
 	},
 	
 	start: function() {
// 		var opt = {'sendStack':false, 'request': 'stack'};
// 		this.core.start({'name':this.options.name}, opt);
 		this.core.start({'name':this.options.name});
// 		this.core.request.stack.send();
 	},
 	
 	rawData: function(raw, pipe) {
 		this.writeMessage(pipe, raw.data.msg);
 	},
 	
 	writeMessage: function(pipe, message) {
 		var msg = new Element('div', {'class':'sc_message_container'});
 		var cnt = new Element('div', {'class':'msg_top'}).inject(msg);
 		new Element('div', {
 			'text':message,
 			'class':'ape_message'
 		}).inject(cnt);
 		
 	},
	
	createUser: function(user, pipe){
		user.el = new Element('div', {
			'class':'chat_user'
		}).inject(pipe.elems.users);
	},
	
	deleteUser: function(user, pipe){
		user.el.dispose();
	},
	
	createPipe: function(pipe, options){
		var tmp;
		console.log("unipipe created" + pipe);
		
		pipe.elems = {};
		pipe.logs = new Array();
		
		pipe.elems.container = new Element('div', {
			'class':'sc_pipe'
		}).inject(this.elems.pipeContainer);
		pipe.elems.message = new Element('div',{
			'class':'sc_messages'
		}).inject(this.elems.container, 'inside');
		
		if (pipe.users) {
			pipe.elems.usersList = new Element('div',{
				'class':'users_list'
			}).inject(pipe.elems.container);
			
			pipe.elems.users = new Element('div',{
				'class':'sc_users_list'
			}).inject(pipe.elems.usersList);
			
			// need to add tab
			tmp = new Element('a', {
				'text':pipe.name,
				'href':'javascript:void(0)',
				'events':{
					'click':function(pipe){
						this.setCurrentPipe(pipe.getPubid())
					}.bind(this,[pipe])
				}
			}).inject(this.elems.container);
		}
	},
	
 	createChat: function(){
		this.elems.pipeContainer = new Element('div', {
			'id':'sc_pipe_container'
		});
		this.elems.pipeContainer.inject(this.options.container);
 		this.elems.more = new Element('div',{'id':'more'}).inject(this.options.container, 'after');
		this.elems.tabs = new Element('div', {'id':'tabbox_container'}).inject(this.elems.more);
		
		this.elems.sendboxContainer = new Element('div', {'id':'sc_sendbox_container'}).inject(this.elems.more);
		this.elems.sendBox = new Element('div', {'id':'sc_sendbox'}).inject(this.elems.sendboxContainer, 'bottom');
		this.elems.sendBoxForm = new Element('form', {
			'events':{
				'submit': function(event) {
					event.stop();
					var val = this.elems.sendInputBox.get('value');
					if (val != ''){
						//send
						
					}
				}.bindWithEvent(this)
			}
		}).inject(this.elems.sendBox);
		this.elems.sendInputBox = new Element('input',{
			'type':'text',
			'id':'send_input_box',
			'autocomplete':'off'
		}).inject(this.elems.sendBoxForm);
		this.elems.sendButton = new Element('input',{
			'type':'button',
			'id':'send_button',
			'value':''
		}).inject(this.elems.sendBoxForm);
 	}
 });