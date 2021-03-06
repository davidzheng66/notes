## 1. Commands
* [df(Disk Filesystem): check disk space in Linux](https://www.tecmint.com/how-to-check-disk-space-in-linux/)
   * *df -h*
* [du(Disk Usage): find disk usage of files and directories](https://www.tecmint.com/check-linux-disk-usage-of-files-and-directories/)
   * _du -h_
* [rm(Remove files and folders):](https://www.tecmint.com/linux-rm-command-examples/)
  * _rm_ FileName _-rf_ (be careful to use this command)
  * _rm -i_ FileName (safe to use this command)
* [tar(Tape Archive):](https://www.interserver.net/tips/kb/use-tar-command-linux-examples/)
  * Create zip file: _tar -czvf_ myfile.tar ./myfolder
  * Extract zip file: _tar -xzvf_ myfile.tar
## 2. Shortcuts on terminal
* _Ctrl+Shift+C_: copy highlighted characters
* _Ctrl+Shift+V_: paste characters in clipboard, or using middle button in the mouse
* _Ctrl+Shift+N_: create a terminal in a new window
* _Ctrl+Shift+T_: create a terminal in the same window
## 3. Shortcuts on QNX Momentics IDE (Based on Eclipse)
* Open menu of shortcuts:
  * _Ctrl+Shift+L_
  * Windows -> Preferences -> General -> Keys
* Shift between header and source files: _Ctrl+Tab_
* Navigate back and forward: _Alt+Left_ and _Alt+Right_
* Move lines up and down: _Alt+Up_ and _Alt+Down_ 
* Comment/Uncomment: _Ctrl+/_
* Change font size: _Ctrl++_, _Ctrl+-_
## 4. Shortcuts on Visual Studio Code
* Open menu of shortcuts:
  * _Ctrl+K_ _Ctrl+S_
  * File -> Preferences -> Keyboard Shortcuts
* Shift between header and source files: _Alt+O_
* Navigate back and forward: _Ctrl+Alt+-_ and _Ctrl+Shift+-_
* Move lines up and down: _Alt+Up_ and _Alt+Down_ 
* Comment/Uncomment: _Ctrl+/_
* Change font size: _Ctrl++_, _Ctrl+-_
## 5. [How to use Ubuntu in full screen mode on virtualbox?](https://askubuntu.com/questions/18425/how-to-use-ubuntu-in-full-screen-mode-on-virtualbox)
## 6. [Linux Error Codes](https://www.thegeekstuff.com/2010/10/linux-error-codes/), [Linux Signals](https://man7.org/linux/man-pages/man7/signal.7.html)
## 7. Upgrade gcc
 *  ```
    add-apt-repository ppa:ubuntu-toolchain-r/test
    apt-get update
 
    //or manually into sources.list
    //deb http://ppa.launchpad.net/ubuntu-toolchain-r/test/ubuntu precise main  
    //deb-src http://ppa.launchpad.net/ubuntu-toolchain-r/test/ubuntu precise main
    //run
    //apt-key adv --keyserver keyserver.ubuntu.com --recv-keys 1E9377A2BA9EF27F
    //apt-get update

    apt-get install g++-9
    update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-9 5
    update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-9 5
    update-alternatives --config gcc
    # select version 9.4
    update-alternatives --config g++
    # select versioon 9.4
 
    or
    $ sudo add-apt-repository "deb http://dk.archive.ubuntu.com/ubuntu/ bionic main"
    $ sudo add-apt-repository "deb http://dk.archive.ubuntu.com/ubuntu/ bionic universe"
    $ sudo apt update
    $ sudo apt install gcc-5 g++-5
    ```
  
