
# minitalk

This project utilises signals in linux in order to create a client-server connection between two terminals. The connection will allow us to send characters and strings from client to server. The server displays its PID and decrypts the message while the client encrypts the message using SIGUSR1 and SIGUSR2 to the server PID.

# How to use

1. Clone the repository, then enter the cloned directory

```bash
git clone git@github.com:FutureSn0/minitalk.git
cd minitalk
```

2. Run "make"

```bash
make
```

3. run "server and copy the PID

```bash
./server
./server <PID displayed here>
```
4. open another terminal, then run client on the 2nd terminal, the pid and the string you want to send

```bash
./client <Server PID> <string>
```
Additional makefile rules

`make` - Compile ft_printf files.

`make clean` - Delete all .o (object files) files.

`make fclean` - Delete all .o (object file) and .a (executable) files.

`make re` - Reblilds project by using rules `fclean` + `all`.

# Subject
### Mandatory
- Produce server and client executables.
- The Client must communicate a string passed as a parameter to the server (referenced by its process ID) and display it.
- Use SIGUSR1 and SIGUSR2 signals only.

All functions must be fully functioning and well-tested to obtain passing score (100/100).

### Bonus
- Add reception acknowledgement system.
- Support Unicode characters.

All functions must be fully functioning and well-tested to obtain an additional 25 points to the passing grade (125/100).

# Norminette

All projects are written according to a standard implemented by the 42 school known as "Norminette". This standard specifies our files to be formatted in a specific way, limits the amount of functions and varables included in a single file, and also the use of certain statements (for, do.. while, switch.. case, etc).
