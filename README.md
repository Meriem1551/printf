<<<<<<< HEAD

# 🚀 Printf Team Project 🖨️

Welcome to the Printf Team Project! This project showcases our custom implementation of the printf function, offering exciting features and custom conversion specifiers. Get ready for a printf experience like no other! 🎉
=======
<h1>0x11. C - printf team project</h1>
>>>>>>> 750a7e764ad3ae4bf44cca49a52c98b05e3f6152

  <h3>Mandatory Tasks</h3>

<h4>0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm
a Spur for life</h4>                                                               
<p>Write a function that produces output according to a format.</p>                      
                                                                                    
                                                                                    
<h4>1. Education is when you read the fine print. Experience is what you get if you don't</h4>
<p> Handle the following conversion specifiers: d and i</p>
   
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

<h3>Advanced Tasks</h3>

<h4>2. With a face like mine, I do better in print</h4>                                      
<p>Handle the following custom conversion specifiers:</p> 

- b: the unsigned int argument is converted to binary
                                                                                    
<h4>3. What one has not experienced, one will never understand in print</h4>               
<p>Handle the following conversion specifiers:</p>

- u
- o
- x
- X
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers
                                                                                    
<h4>4. Nothing in fine print is ever good news</h4>
<p>Use a local buffer of 1024 chars in order to call write as little as possible.</p>

- Use a local buffer of 1024 chars in order to call write as little as possible.
                                                                                    
<h4>5. My weakness is wearing too much leopard print </h4>                                   
<p>Handle the following custom conversion specifier: </p>

- S : prints the string.
- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
                                                                                    
<h4>6. How is the world ruled and led to war? Diplomats lie to journalists and believe t
hese lies when they see them in print</h4>                                  
<p>Handle the following conversion specifier: p.</p>  

- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers
                                                                                    
<h4>7. The big print gives and the small print takes away </h4>                              
<p>Handle the following flag characters for non-custom conversion specifiers:</p>

- '+'
- space
- '#'
                                                                                    
<h4>8. Sarcasm is lost in print </h4>                                                        
<p>Handle the following length modifiers for non-custom conversion specifiers:</p>         
                                                                                    
- l                                                                                   
- h                                                                                   
- Conversion specifiers to handle: d, i, u, o, x, X                                   
                                                                                    
<h4>9. Print some money and give it to us for the rain forests</h4>                          
<p>Handle the field width for non-custom conversion specifiers.  </p>                      
                                                                                    
<h4>10. The negative is the equivalent of the composer's score, and the print the perfor mance </h4>                                                                         
<p>Handle the precision for non-custom conversion specifiers. </p>      

<h4>11. It's depressing when you're still around and your albums are out of print</h4>    
<p>Handle the 0 flag character for non-custom conversion specifiers.</p>                   
                                                                                    
<h4>12. Every time that I wanted to give up, if I saw an interesting textile, print what
 ever, suddenly I would see a collection  </h4>                                         
<p>Handle the - flag character for non-custom conversion specifiers.</p>                   
                                                                                    
<h4>13. Print is the sharpest and the strongest weapon of our party </h4>                  
<p>Handle the following custom conversion specifier:</p>
- r : prints the reversed string
                                                                                    
<h4>14. The flood of print has turned reading into a process of gulping rather than savoring </h4>
 <p>Handle the following custom conversion specifier:</p>
 
 - R: prints the rot13'ed string
                                                                                    
<h4>15. * All the above options work well together. </h4>

<h2>Compilation:</h2>
All files will be compiled with gcc 4.8.4 using the flags: -Wall -Werror -Wextra -pedantic

    gcc -Wall -Werror -Wextra -pedantic *.c

  ### Betty coding style:

  All files are written in C and follows the Betty coding style for Holberton School. For more detail, check this page:
  [Betty style documentation](https://github.com/holbertonschool/Betty/wiki)

  ### Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)
* _putchar(char c)

  ## Function prototypes (main.h)

- int printf_pointer(va_list val);
- int printf_hex_aux(unsigned long int num);
- int printf_HEX_aux(unsigned int num);
- int printf_exclusive_string(va_list val);
- int printf_HEX(va_list val);
- int printf_hex(va_list val);
- int printf_oct(va_list val);
- int printf_unsigned(va_list args);
- int printf_bin(va_list val);
- int printf_srev(va_list args);
- int printf_rot13(va_list args);
- int printf_int(va_list args);
- int printf_dec(va_list args);
- int _strlen(char *s);
- int *_strcpy(char *dest, char *src);
- int _strlenc(const char *s);
- int rev_string(char *s);
- int _strlenc(const char *s);
- int printf_37(void);
- int printf_char(va_list val);
- int printf_string(va_list val);
- int _putchar(char c);
- int _printf(const char *format, ...);
  
    
<h2>Contributors are:</h2>

 - Meriem Boussaid
 - Ikram Kawthar Khezour
