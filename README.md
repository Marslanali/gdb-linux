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

Compile your C program with -g option. This allows the compiler to collect the debugging information.

```

cd gdb-debugger
gcc -g -o fibonacci fibonacci_naive.c
./fibonacci
```

Launch the C debugger (gdb).

```
gdb ./fibonacci
```

Set up a break point inside C program. The Syantx is `break line_number`

```
break 10
Breakpoint 1 at 0x400641: file fibonacci_naive.c, line 10.
```

Execute the C program in gdb debugger.

```
run
```

Once you executed the C program, it would execute until the first break point, and give you the prompt for debugging.

```

(gdb) run
Starting program: /home/arslan/github-repositories/gdb-debugger/fibonacci 

Breakpoint 1, main (argc=1, argv=0x7fffffffda48) at fibonacci_naive.c:10
10	int main(int argc, char** argv) {
```
