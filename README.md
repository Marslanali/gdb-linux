# gdb-debugger
Debug C program using gdb

### GDB installation

There are two ways you can install GDB on linux.

### Install pre-built gdb binaries

**On Debian and Ubuntu:**

```
sudo apt-get update
sudo apt-get install gdb
```

### compile gdb from source, compile and install

**On Debian and Ubuntu:**

Download source code.

```
wget "http://ftp.gnu.org/gnu/gdb/gdb-7.11.tar.gz"
```

Extract the source code.

```
tar -xvzf gdb-7.11.tar.gz
```

Configure, Compile, and install it.

```
cd gdb-7.11
./configure
make
make install
sudo make install (optional)
```
By default this will install gdb binaries in /usr/local/bin and libs in /usr/local/lib.

To check version and test whether gdb installed correctly.

```
gdb --version
```


### Example Debug C Program


```
cd gdb-debugger
mkdir build
cd build
cmake ..
make
```










