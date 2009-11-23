class Cons {
	Any? car;
	Any? cdr;

	Cons () {
		car = null;
		cdr = null;
	}

	@Virtual Any? car () {
		return car;
	}

	@Virtual Any? cdr() {
		return cdr;
	}
	
	void printCons() {
		/* print cons list structure whose root is this */
		int count = 1;
		Cons? current = this;

		while (current.hasChild()) {
			if (current instanceof Num) {
				print current.car;
			} else if (current instanceof Str) {
				print current.car;
			}
			current = current.cdr;
			count++;
		}
		OUT << count << EOL;
	}

	Boolean hasChild() {
		return (cdr == null) ? false : true;
	}
  
}

class Num extends Cons {
	Num (int n = 0) {
		_car  = n;
		_cdr = null;
	}

}

class Str extends Cons {

	Str (String s = "") {
		car = s;
		cdr = null;
	}
}

void main (String[] args)
{
	a = new Num(3);
	a.cdr = new Num(4);
    Cons? p = a.cdr;
	p.cdr = new Num(5);
//	p.cdr = new Str("hello");
	a.printCons();
}
