OpenGL-Tutorial
===============

An _unofficial_ GLFW implementation of the official OpenGL tutorial, which can be found [here](http://www.glprogramming.com/red/)

##Warning
This is not an official port; and some parts of the code may be incomplete, incorrect, or inefficient. That being said, please feel free to contribute changes or to let the developers know of pertinent issues.

##Notes
In order to run these programs, you will need to have and link to GLFW; pkg-config makes this relative simple:
```
gcc `pkg-config --cflags glfw3` -o 1 1-1.c `pkg-config --static --libs glfw3`
```
However, you will need to tell pkg-config where the glfw library and header files reside if you do not choose to install. For example, if you have the base directory of GLFW compiled one directory above the base directory of this project, you might have to add the directory so pkg-config knows where to look for the relevant files:
```
export PKG_CONFIG_PATH=$PKG_CONFIG_PATH:../../glfw/build/src/
```
