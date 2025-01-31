# groc-tracker2024
reads grocery item list from txt file, converts the list into item\quantity pairs in a .dat file named "frequncy.dat", then gives the option to 
search for the frequency of an item, print the key\quantity list in the terminal, or print a histogram of items. The problem this program tackles
is helping grocery store employees determine how to set up and face their inventory by counting and giving a visual aid as they face ( which means to present inventory neatly in the aisle) items.

Ensured the code was written using best coding practices.

If there were a place for enhancements in my code, it would be utilizing exception handling, such as when providing anything other than
an integer in the menu section of the program appears to cause a memory leak.

The most challenging code to write was the importing and exporting of the files from the .txt file into the.dat file. I found that it is easier to add a cout to tell if the import/export was successful. A tool I will always have in my toolbox is stack overflow and coding subreddits for advice when im in a deadend.

Using a SWITCH method instead of multiple else\if functions is now my favorite way to operate a menu function as it is more readable and a lot less code to implement. 



