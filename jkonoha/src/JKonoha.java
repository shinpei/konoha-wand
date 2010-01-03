import java.io.*;
import java.lang.*;


public class JKonoha {
	int minor_version;
	int majour_version;
	int stacksize;

	private static int KONOHA_STACKSIZE = 4096 * 2;

	public static int KNH_OBJECT_MAGIC = 38672;
	public static int KNH_RCGC_INIT = 1;
	
	final private void konoha_init () {
		/* global context */
		if (stacksize < KONOHA_STACKSIZE) {
			stacksize = KONOHA_STACKSIZE;
		}
		JKonohaContext ctx = new JKonohaContext();
		ctx.initSharedData();
		
		
	}
	
	public JKonoha(int ssize) {
		minor_version = 0;
		majour_version = 0;
		stacksize = ssize;

		
	}

	public int parseopt(String[] args) {
		
		return 0;
	}

	public void shell () {
		try {
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			String line;
			JKonohaContext ctx = new JKonohaContext();
			ctx.setInteractive(1);
			ctx.setDebug(1);
			System.out.print(">>> ");
			while ((line = br.readLine()) != null) {
				System.out.println(line);
				System.out.print(">>> ");

			}
			br.close();
		} catch (IOException e) {
			System.err.println("Error has occured");
		}
	}
		
}

			 
