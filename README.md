# C-Compiler
This is a C Compiler made using Flex and Yacc. It is a fully functional compiler in its own domain, this implies that it is operational and works effectively for its intended purpose.
Download flex and yacc to run the codes on your VM or linux OS.

Instructions to run the code and test

//to compile the lex code use
flex <FileName.l>

//to compile the yacc code use
yacc <Filename.y> -d

//to compile the generated .c files
gcc lex.yy.c y.tab.c -w

//to run the generated executable file without tests
./a.out

//to run the generated executable file with tests
./a,out <location/of/file>/<nameOfTestFile>
