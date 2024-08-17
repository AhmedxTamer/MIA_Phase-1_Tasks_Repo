# Documentation of practicing each Ubuntu command and tool in Linux session
* NOTES FOR THIS DOCUMENTATION:
1. [] refers to anything inside it to be a name
2. {} refers to anything inside it to be a code
3. I used the brackets above in this docummentation only for clarification and they are not to be used in the terminal
## 1. pwd:
* short for "print working directory"
* shows path for the working directory
## 2. ls:
* short for "list content"
* list content in working directory:
    1. gdssfgsdf
## 3. ls -l:
* list content in working directory vertically
* also includes permission groups for each item
## 3. ls -a:
* list all content in working directory
* including hidden files
## 4. ls -r:
* list all content in working directory in reverse order

## 4. mkdir [folder name]:
* short for "make directory"
* creates folder
## 5. cd [folder path from working directory]:
* short for "change directory"
* change working directory to that folder
## 6. cd ..:
* moves up one directory level in the directory hierarchy
## 7. touch [file_name.file_extension]:
* create file
## 7. touch [file_name].sh:
* .sh is the extension for BASH files
* BASH files are used to execute multiple commands together
* {#!/bin/bash} is a necessary first line in any BASH file
* {./[file_name].sh} executes the file
## 8. nano [file_name.file_extension]:
* edit the file
## 9. cat [file_name.file_extension]:
* short for "concatenate"
* shows file contents
## 10. echo [text]:
* prints the text given (literally echo)
## 11. echo $[environment_variable]:
* prints the value of the given environment variable
## 12. rm [file_name.file_extension]:
* short for "remove"
* delete file 
## 13. rm -r [file_name.file_extension]:
* remove directory and their contents
## 14. [command] --help:
* provide help with the specified command
* used when help is needed to know more about the command and how to use it
## 15. man [command]:
* short for "manual"
* show the manual of the command
* also used when help is needed to know more about the command and how to use it
## 16. clear:
* clear the terminal view
## 17. [command_1] | [command_2]:
* redirect output of command_1 to command_2
## 18. ls | grep x:
* grep acts as a filter for the ls command and only lists items containing x
## 19. :
* short for ""
## 20. :
* short for ""
## 21. :
* short for ""
## 22. :
* short for ""





# Linux Directories 
* access any directory by using {cd [dierectory_name]} (EXAMPLE: {cd bin})
## 1. /
* called root directory
* contains all Linux directories
* {cd /}  :change directory to /
## 2. /home
* ~$    :means you are using /home
* {cd ~}  :change directory to /home
## 3. /dev
* contains external devices
## 3. /boot
* contains device boot files 
* DON'T PLAY WITH IT
## 4. /etc
* extra stuff
* DON'T PLAY WITH IT 
## 5. /var
* log files and variables 
* we review it if the system is crashing or something along those lines
## 6. /bin
* contains executable binary files
## 7. /sbin
* contains system executable binaries, not for command line
* DON'T PLAY WITH IT 
## 8. /opt
* short for "optional"








# Some helpful tips & shortcuts
1. use tab key when typing file_name.file_extension to auto complete the name
2. ^ means ctrl key
3. ^C means: cancel process / kill process
5. you can use multiple options with one command at the same time. (EXAMPLE: {ls -l -a})
6. {./[executable_file_name]} runs the specified executable file if it is in the current directory.
7.  





