public class JKonohaContext {
	private kObject[] unusedObject;
	private int unusedObjectSize;
	private JKonohaShare share;
	
	JKonohaContext () {
		unusedObject = null;
		unusedObjectSize = 0;
	}
	
	public void initSharedData() {
		int i;
		share = new JKonohaShare();
		

	}
	   
}
