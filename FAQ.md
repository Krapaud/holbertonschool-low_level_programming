# Holberton School - Programming Questions & Answers

## Frequently Asked Questions

### Q: How to debug segmentation faults in C?

**A:** Here are the main steps to debug segfaults:

1. **Use GDB (GNU Debugger)**
   ```bash
   gcc -g -o program program.c
   gdb ./program
   (gdb) run
   (gdb) bt  # backtrace to see where it crashed
   ```

2. **Use Valgrind**
   ```bash
   valgrind --tool=memcheck --leak-check=full ./program
   ```

3. **Common causes:**
   - Dereferencing NULL pointers
   - Buffer overflows
   - Using freed memory
   - Stack overflow (infinite recursion)

### Q: What's the difference between malloc and calloc?

**A:** 
- `malloc(size)`: Allocates memory but doesn't initialize it
- `calloc(num, size)`: Allocates memory AND initializes it to zero

### Q: How to avoid memory leaks?

**A:**
- Always pair `malloc` with `free`
- Set pointers to NULL after freeing
- Use tools like Valgrind to detect leaks
- Consider using `atexit()` for cleanup functions
