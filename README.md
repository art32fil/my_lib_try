Это библиотека ручного создания
в папке include находится заголовочный файл библиотеки
в папке libsrc  находится исходный код библиотеки
в папке src     находится исходный код использующий библиотеку
библиотека была собрана под линуксом (ubuntu 16.04) следующими командами (находясь в папке libsrc)
  $ g++ -c -I../include myfunc.cpp
  $ ar rc libmylib.a myfunc.o
  $ runlib libmylib.a
затем прикомпилить существующую библиотеку можно командами (находясь в папке src)
  $ g++ main.cpp -I../include -L../lib -lmylib
или
  $ g++ main.cpp -I../include -rdynamic ../lib/libmylib.a

а потом для всего этого был создан cmake файл
и теперь можно запустить (в корне)
  $ cmake CMakeLists.txt
  $ make
  