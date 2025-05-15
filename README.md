# Knoppix os Documentation
## a. Knoppix OS Installation on Oracle VM

To install Knoppix on Oracle VM VirtualBox, first download the Knoppix ISO image.
Next, create a new virtual machine in VirtualBox, specifying Linux as the operating 
system and Debian (as Knoppix is Debian-based) as the version. Attach the downloaded
Knoppix ISO file to the virtual machine's virtual optical drive. Finally, start the 
virtual machine and follow the Knoppix installation prompts.
## b. getppid System Call of Knoppix OS

This part describes the getppid system call within the Knoppix environment. The getppid
call retrieves the process ID of the calling process's parent. This is a fundamental system
call for process management. Understanding getppid is crucial for tracing process lineage and
relationships within the operating system.
