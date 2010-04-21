/**
 * @author shinpei
 */

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
 		
 		this.els = {};
 		this.currentPipe = null;
 		this.logging = true;
 		
 		this.addEvent('ready', this.createChat);
 		//this.onRaw('data', this.rawData);
 		//this.onCmd('send', this.cmdSend); 		
 	},
 	
 	start: function() {
 		var opt = {'sendStack':false, 'request': 'stack'};
 		this.core.start({'name':this.options.name}, opt);
 		
 		this.core.request.stack.send();
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
 	
 	createChat: function(){
 		this.els.sendboxContainer = new Element('div', {'id':'sc_sendbox_container'}).inject(this.options.container);
 		this.els.sendBox = new Element('div', {'id':'sc_sendbox'}).inject(this.els.sendboxContainer, 'bottom');
 	}
 });