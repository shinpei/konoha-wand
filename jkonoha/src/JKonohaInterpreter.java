import java.io.*;

public class JKonohaInterpreter {
	public static void main (String[] args) {
		JKonoha jkonoha = new JKonoha(4096);
		int n = jkonoha.parseopt(args);
		if (args.length - n == 0) {
			jkonoha.shell();
		}
	}
}

			 

