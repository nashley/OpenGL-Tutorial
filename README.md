OpenGL-Tutorial
===============

An _unofficial_ GLFW implementation of the official OpenGL tutorial, which can be found [here](http://www.glprogramming.com/red/).
Note that the aforementioned website is community based, but the tutorial itself seems to be official (albeit outdated).

##Warning
This is not an official port; and some parts of the code may be incomplete, incorrect, or inefficient. That being said, please feel free to contribute changes or to let the developers know of any pertinent issues which you may encounter.

##Notes
In order to run these programs, you will need to have GLFW and link it to the program(s) you wish to compile. Thankfully, pkg-config makes this relative simple; e.g., you would issue the following command to compile the first example:
```
gcc `pkg-config --cflags glfw3` -o 1 1-1.c `pkg-config --static --libs glfw3`
```
However, you will need to tell pkg-config where the GLFW library and header files reside if you choose not to install them. For example, if you have the base directory of GLFW one directory above the base directory of this project, you would tell pkg-config where to look for the relevant files like this:
```
export PKG_CONFIG_PATH=$PKG_CONFIG_PATH:../../glfw/build/src/
```
Of course, you will need to compile GLFW regardless of whether you choose to install it or not. If you need help doing this, please read their [compiling guide](http://www.glfw.org/docs/latest/compile.html)
