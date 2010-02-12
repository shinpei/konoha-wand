class Memcached;

Memcached Memcached.new();
void Memcached.appendServerList(String[] serverlist);
void Memcached.setKeyValue(String key, String value);
String Memcached.getValue(String key);