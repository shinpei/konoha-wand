using memcached.*;

Memcached mem = new Memcached();
slist = [
	 "192.168.59.222",
];
mem.appendServerList(slist);
mem.setKeyValue("taro", "234");
OUT << mem.getValue("taro") << EOL;
