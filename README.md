Get Next Line is a file-reading function project in the 42 School curriculum that requires implementing a function to read a file line by line efficiently in C.
Concept:

The goal is to create a function get_next_line() that reads a file descriptor until it reaches a newline (\n), handling dynamic memory allocation, buffers, and multiple file descriptors.
Key Features:

 - Reads one line at a time, even if the file has no fixed size.
 - Uses a static buffer to optimize performance.
 - Works with any file descriptor (files, stdin, sockets, etc.)
 - Supports multiple file descriptors simultaneously.
 - Handles partial reads efficiently without losing data.
 - Avoids memory leaks through proper allocation and freeing.

This project strengthens understanding of file handling, memory management, and efficient I/O operations, making it a crucial step for working with text-based file processing in C. 📄💡
