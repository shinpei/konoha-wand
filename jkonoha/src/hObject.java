public class hObject {
	private int lock;

	hObject () {
		lock = 0;
	}

	final public int get_lock() {
		return lock;
	}

	final public void set_lock() {
		lock = 1;
	}
}
