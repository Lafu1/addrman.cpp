If you get this Error, delete all in the obj foulder and compile again!

obj/addrman.o: In function CAddrMan::Good_(CService const&, long long)':
/tmp/Coin/src/addrman.cpp:307: undefined reference toCService::ToString() const' 
collect2: error: ld returned 1 exit status 
makefile.unix:193: recipe for target 'Coin' failed make: *** [coined] Error 1
