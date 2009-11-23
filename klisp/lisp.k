class Cons {
	Cons? car;
	Cons? cdr;

	Cons () {
		car = null;
		cdr = null;
	}

	@Virtual Any car () {
		return car;
	}

	@Virtual Any cdr() {
		return cdr;
	}
	
	void printList() {
		/* print cons list structure whose root is this */
		int count;
		Cons? cur = car;
		while (cur != null) {
			cur = cur.cdr();
			count++;
		}
		OUT << %("there are %d{0} noes", count) << EOL;
	}
  
}

class Num extends Cons {
	int _num; 
	Num (int n = 0) {
		num = n;   
	}

	Any car () {
		return num;
	}
}

class Str extends Cons {
	String _str;

	Str (String s = "") {
		_str = s;
	}

	Any car () {
		return str;
	}
}

void main (String[] args)
{
	a = new Cons();
	a.car = new Num(3);
	a.cdr = new Cons();
	a.cdr.car = new Num(4);
	a.cdr.cdr = new Cons();
//	OUT <<  a.car() << EOL;
	a.printList();
}
