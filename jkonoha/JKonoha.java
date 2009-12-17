import java.io.*;
import java.lang.*;

public class JKonoha {
	int version;
	public JKonoha() {
		version = 0;
	}

	public void readFromInput (String prompt) {
		try {
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			String line;
			while ((line = br.readLine()) != null) {
				System.out.println(">>> " + line);
			}
			br.close();
		} catch (IOException e) {
			System.err.println("Error has occured");
		}
	}
		
}

			 
