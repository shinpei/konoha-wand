public class JKonohaContext {
	private kObject[] unusedObject;
	private int unusedObjectSize;
	private JKonohaShare share;

	private int debug;
	private int interactive;
	
	JKonohaContext () {
		unusedObject = null;
		unusedObjectSize = 0;
	}
	
	public void initSharedData() {
		int i;
		share = new JKonohaShare();
	}

	public void setInteractive(int v) {
		this.interactive = v;
	}

	public int getInteractive() {
		return this.interactive;
	}

	public void setDebug(int v) {
		this.debug = v;
	}

	public int getDebug() {
		return this.debug;
	}

}
