How the C standard library functions process characters, strings, lines of text and blocks of memory.*

Understanding the fundamentals of C is important to master it. Each compiler, translator, & interpreter handles these differently. 
So,a thorough knowledge and understanding is a must. 

Character: C complier handles it as an integer. Each character is a unique integer. Character is always singular.
When asked to print with a printf function the integer will be converted into the proper character the integer represents. 

String: String is a combination of characters. Is string not a character? No it is not. A string is an array of characters.

Can a single character be a string? Yes, Absolutely.
Suppose I write a single letter z. Is it a character or a string?

How does C compiler distinguish a character and a string? 

For this purpose the developer of the C compiler brought additional requirements. They are single & double quotes.

So,if you write ‘z’ the compiler understands that you have written a character not a string and thus converts to the corresponding unique integer.

Instead if you write “z” the compiler understands that you have written a string not a character and thus will store it as an array of single element.

If you write “zebra” the compiler understands that you have written a string not a character and thus will store it as an array of five elements.

Another important thing the C compiler does is it adds a null character ('\0' ) at the end of each string. That is, the C compiler does not store the double quotes. 
Instead it adds the null character \0 at the end of each string.

If you like to explicitly write a string as an array of characters, for example you should write
char animal[ ]= {'z', 'e', 'b', 'r',’a’, '\0'}; 
where animal is the variable name where you like hold the value of zebra.

If you omit the last null character and write 
char animal[ ]= {'z', 'e', 'b', 'r',’a’}; 
the C compiler will throw an error. The program will terminate (crash) prematurely and print an error message “segmentation fault” or “access violation”.  Many systems will print many characters until they encounter the terminating null character \0.

You can write
char animal[]=”zebra”;

This is valid. The C compiler upon seeing the double quote will append the characters ‘z’, e’,’b’,’r’,’a’, with the null character \0 and store in the memory.

Try writing char animal[]=”zebra \0”;
and print and see what you get.

You can access the entire string via pointer by giving the value of the address of the first position of the memory location. The C compiler will pull the entire string up to the end of the null character \0 and print only the characters not the double quotes or the null character.

Lines of text and blocks of memory all are stored with a terminating null character. All can be accessed with the first value the address of the pointer.

