import "types.k";
import "tokenizer.k";
import "eval.k";
void main (String[] args)
{
	a = new OpAdd();
	a.cdr = new Num(4);
	Cons? p = a.cdr;
	p.cdr = new Num(5);
	a.printLisp();
	ret = a.evaluate();
	OUT << ret.dump() << EOL;
}

