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
## 3. ls -l:
* list content in working directory vertically
* also includes permission groups for each item (EXAMPLE: -rwx rwx rwx)
    1. 1st letter is - or d
    2. The - indicates regular file
    3. The d indicates directory 
    4. The r means prmission to read
    5. The w means prmission to write
    6. The x means prmission to execute
    7. 1st three letters after - or d indicates permissions for file owner
    8. 2nd three letters indicates permissions for the group owners of the file
    9. 3rd three letters indicates permissions for all other users
## 4. ls -a:
* list all content in working directory
* including hidden files
## 5. ls -r:
* list all content in working directory in reverse order

## 6. mkdir [folder name]:
* short for "make directory"
* creates folder
## 7. cd [folder path from working directory]:
* short for "change directory"
* change working directory to that folder
## 8. cd ..:
* moves up one directory level in the directory hierarchy
## 9. touch [file_name.file_extension]:
* create file
## 10. touch [file_name].sh:
* .sh is the extension for BASH files
* BASH files are used to execute multiple commands together
* {#!/bin/bash} is a necessary first line in any BASH file
* {./[file_name].sh} executes the file
## 11. nano [file_name.file_extension]:
* edit the file
## 12. cat [file_name.file_extension]:
* short for "concatenate"
* shows file contents
## 13. echo [text]:
* prints the text given (literally echo)
## 14. echo $[environment_variable]:
* prints the value of the given environment variable
## 15. rm [file_name.file_extension]:
* short for "remove"
* delete file 
## 16. rm -r [file_name.file_extension]:
* remove directory and their contents
## 17. [command] --help:
* provide help with the specified command
* used when help is needed to know more about the command and how to use it
## 18. man [command]:
* short for "manual"
* show the manual of the command
* also used when help is needed to know more about the command and how to use it
## 19. clear:
* clear the terminal view
## 20. [command_1] | [command_2]:
* redirect output of command_1 to command_2
## 21. ls | grep x:
* grep acts as a filter for the ls command and only lists items containing x
## 22. chmod +[permisson] [file_name.file_extension]:
* short for "change mood"
* grant specified permission to file owner, file group owners and all other users
* EXAMPLE: chmod +x



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
## 4. /boot
* contains device boot files 
* DON'T PLAY WITH IT
## 5. /etc
* extra stuff
* DON'T PLAY WITH IT 
## 6. /var
* log files and variables 
* we review it if the system is crashing or something along those lines
## 7. /bin
* contains executable binary files
## 8. /sbin
* contains system executable binaries, not for command line
* DON'T PLAY WITH IT 
## 9. /opt
* short for "optional"








# Some helpful tips & shortcuts
1. use tab key when typing file_name.file_extension to auto complete the name
2. ^ means ctrl key
3. ^C means: cancel process / kill process
5. you can use multiple options with one command at the same time. (EXAMPLE: {ls -l -a})
6. {./[executable_file_name]} runs the specified executable file if it is in the current directory.



