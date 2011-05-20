include nativelink;

@Singleton class Test;

@Native void Test.callbackVoid(Func f);
@Native void Test.callbackInt2(Func<int, int> f, int a, int b);
@Native int Test.callbackIntInt2(Func<int,int=>int> f, int a, int b);
