# Table of contents
1. [Introduction](#introduction)
2. [Some paragraph](#paragraph1)
    1. [Sub paragraph](#subparagraph1)
3. [Another paragraph](#paragraph2)

## This is the introduction <a name="introduction"></a>
Some introduction text, formatted in heading 2 style

## Some paragraph <a name="paragraph1"></a>
The first paragraph text

### Sub paragraph <a name="subparagraph1"></a>
This is a sub paragraph, formatted in heading 3 style

## Another paragraph <a name="paragraph2"></a>
The second paragraph text

## 1. [How to make the perfect Readme.md on GitHub](https://medium.com/swlh/how-to-make-the-perfect-readme-md-on-github-92ed5771c061)
## 2. [How to Setup SSH Keys](https://www.digitalocean.com/community/tutorials/how-to-set-up-ssh-keys--2#:~:text=%20How%20To%20Set%20Up%20SSH%20Keys%20,keys%20onto%20your%20server%20and%20ensured...%20More%20)
* [Video](https://www.youtube.com/watch?v=hQWRp-FdTpc)
* _ssh -i ~/.ssh/id_ecg root@192.168.10.100_
* _scp -i ~/.ssh/id_ecg_ source.file _root@192.168.10.100:/tmp_ (target.folder)
## 3. Setup between Windows and Ubuntu
1) In Windows 10, run command "ssh-keygen", it creates 2 files: id_rsa and id_rsa.pub in the folder ".ssh"
2) Copy id_rsa.pub to ~/.ssh and rename it to "authorized_keys" in Ubuntu, or
   * In Windows, [_ssh-copy-id -i ~/.ssh/id_rsa.pub david@192.168.64.129_](https://www.youtube.com/watch?v=ZKZbPZCnHRE), or
   * In Windows, _ssh-copy-id david@192.168.64.129_
3) In Windows, sshing into ubuntu by using "ssh david@192.168.64.129", it will not require your password
4) In Windows, copy file1 to ubuntu by using "scp file1 david@192.168.64.129:~/"
## 4. Setup between Ubuntu and Github
1) In Ubuntu, run command "ssh-keygen -t rsa", add "_github" to the default file names, it creates 2 files: "id_rsa_github" and "id_rsa_github.pub" in the folder ".ssh"
2) Copy the content of "id_rsa_github.pub"
3) In github, go to "Settings" --> "SSH and GPG keys" --> "New SSH key", paste the content of "id_rsa_github.pub" into it, named it "Ubuntu Public Key", then click on "Add SSH key"
4) In ubuntu, cloning a repository "git clone  git@github.com:davidzheng66/notes.git" should not require password
5) If there is an error "Permission denied (publickey)", run the command "ssh-add /home/david/.ssh/id_rsa_github"
  * If there is an error "Could not open a connection to your authentication agent", run the command "eval `ssh-agent -s`", then run the command in 5) and 4)
## 5. UML Tools
* [PlantText: The expert's design tool](https://www.planttext.com/)
* [PlantUML in a nutshell](https://plantuml.com/)
* [StarUML Software](http://staruml.io/)
## 6. [How to Disable/Enable Hyper-V](https://support.genymotion.com/hc/en-us/articles/360002732677)
## 7. [How to Update Intel Device Drivers](https://www.intel.com/content/www/us/en/support/intel-driver-support-assistant.html)
## 8. [Git Tutorial](https://github.com/progit/progit2/tree/master/book)
* [Download](https://git-scm.com/)
* [Book](https://git-scm.com/book/en/v2)
* [Command Line Fundmentals](https://www.youtube.com/watch?v=HVsySz-h9r4&list=PL-osiE80TeTuRUfjRe54Eea17-YfnOOAx&index=1)
  * Set config values, it changes file ".gitconfig"
    * _git config --global user.name "username"_
    * _git config --global user.email "email"_
    * _git config --list_
  * Help:
    * _git help_  "verbe"
    * _git_ "verb" _help_
  * Begin with:
    * Create a repo: _git init_, it will create a folder .git
    * Clone a repo: _git clone_ "Remote URL" "Where to clone"
  * Check Status: _git status_
  * Ignore files, add the file/folder name into ".gitignore"
  * Three area:
    * (1) Working Directory, (2) Staging Area, (3) .git dirctory(Repository)
  * Change files from Working Directory to Staging Area: _git add -A_ (for all files) or _git add_ filename (for a specific file)
    * To reset change above: _git reset_ (for all files) or _git reset_ filename (for a specific file)
  * Commit files: _git commit -m_ "comments"
  * To check log: _git log_
  * View information about the remote repository:
     * _git remote -v_
     * _git branch -a_
  * Initial push:
    * In github, create a new repo "cmaketutorial"
    * In local:
      * Setup email address: _git config --global user.email 'davidzheng66@gmail.com'_
      * Setup user name: _git config --global user.name 'David Zheng'_
      * Commit all files
      * Connect local branch to remote: _git remote add origin git@github.com:davidzheng66/cmaketutorial.git_
      * Push commit: _git push -u origin master_
  * Pushing changes:
     * make changes
     * _git diff_
     * _git status_
     * _git add -A_
     * _git commit -a "comment"
     * _git pull origin_ "branch name"
     * _git push origin_ "branch name"
   * Create a branch for a desired feature
     * _git branch -b_ "branch name" or
     * _git branch_ "branch name" + _git checkout_ "branch name"
     * make changes, commits
     * Push branch to remote
       * _git push -u origin_ "branch name in remote"
         * later, jut _git pull_, _git push_
       * _git branch -a_
     * Set upstream
       * _git branch --set-upstream-to=origin/topic/ECG-67348 topic/ECG-67348_
   * Merge a branch
     * _git check master_
     * _git pull origin master_ or _git pull_
     * _git branch --merged_ (check which branches merged)
     * _git merge_ "branch name"
     * _git push origin master_ or _git push_
   * [Delete a branch](https://www.freecodecamp.org/news/how-to-delete-a-git-branch-both-locally-and-remotely/)
     * _git branch --merged_ (check which branches merged)
     * _git branch -d_ "branch name" (delete branch in local, -D: forced delete)
     * _git branch -a_ (check branches)
     * _git push origin --delete_ "branch name" (delete branch in remote)
     * _git push --delete origin_ "branch name" (delete branch in remote): _git push --delete origin topic/ECG-72915_
   * [Rename a branch](https://stackoverflow.com/questions/6591213/how-do-i-rename-a-local-git-branch)
     * _git branch -m_ "oldname" "newname"
     * _git branch -m_ "newname", if the current working branch is to be renamed
   
* [Fixing Common Mistakes and Undo Bad Committs](https://www.youtube.com/watch?v=FdZecVxzJbk&list=PL-osiE80TeTuRUfjRe54Eea17-YfnOOAx&index=2)
  * Fix message committed before pushing to remote, it will change the history: _git commit --amend -m_ "corret message"
  * Adding files to the same commit: _git commit --amend_
  * Check the log: _git log --stat_
  * If a change should be committed to branch B, but it has been committed to branch A
    * In branch A, use _git log_ to get committed hashcode xxxxxx
    * _git checkout_ B
    * _git cherry-pick_ xxxxxx
    * It is done in branch B, but we also need to get rid of it from branch A
      * _git checkout_ A
      * Use _git log_ to get committed hashcode oooooo
      * There are 3 ways to undo commit
        * Soft, reset committed files to staging area: _git reset --soft_ oooooo_
        * Mixed, default, reset files from staging area to working directory: _git reset_ oooooo
        * Hard, revert tracked files to where they were: _git reset --hard_ oooooo
          * If revert the hard reset is needed
            * Use _git reflog_ to get the hashcode yyyyyy before hard-reset
            * _git checkout_ yyyyyy
            * It is now in detached head state, use _git log_ to check log
              * To store the revert commit: _git branch_ backupxxx
              * To check backuptxxx branch: _git checkout backupxxx_   
        * Clean untracked directories/files: _git clean -df_
   * To revert a commit with changing history:
     * _git revert_ hashcode
   * Compare two commits:
     * _git diff_ hashcode1 hashcode2
* [Using the Stash Command](https://www.youtube.com/watch?v=KLEDKgMmbBI&list=PL-osiE80TeTuRUfjRe54Eea17-YfnOOAx&index=3)
  * Stash: _git stash save "comment"_
  * List stash: _git stash list_
  * Apply a specifi stash and keep it: _git stash apply stash@{0}_
  * Apply the last stash and drop it in the mean time: _git stash pop_
  * Drop a specific stash: _git stash drop_ stash@{0}_
  * Remove all stashes: _git stash clear_
* [Diff and Diffmerge](https://www.youtube.com/watch?v=iCGrKFH2oeo&list=PL-osiE80TeTuRUfjRe54Eea17-YfnOOAx&index=4) 
  * [Download](https://www.sourcegear.com/diffmerge/downloads.php)
  * [Git Settings](https://www.sourcegear.com/diffmerge/webhelp/chapter_integration.html)
* [Using the Add Command](https://www.youtube.com/watch?v=tcd4txbTtAY&list=PL-osiE80TeTuRUfjRe54Eea17-YfnOOAx&index=6)
  * _git add -A_ : default
  * _git add ._
  * _git add -u_
* [Compress or squash some commits into one(rebase)](https://www.devroom.io/2011/07/05/git-squash-your-latests-commits-into-one/)
  * _git rebase -i HEAD~3_, then change "pick" to "squash" for commits to be compressed"
  * _git rebase_"branch name"
    * To abort a rebase: _git rebase --abort_
    
## 9. [Markdown Cheatsheet](https://www.markdownguide.org/cheat-sheet)
## 10 [Setting up a Python Development Environment in Sublime Text - Corey Shafter](https://www.youtube.com/watch?v=xFciV6Ew5r4&list=PL-osiE80TeTtHH8BZngXEsLPGotQxZa6z&index=2)
* [Sublime Text Documentation](https://www.sublimetext.com/docs/3/multiple_selection_with_the_keyboard.html)
  * Find all of words: "Alt + F3", go back to a single word: "ESC"
## [PKI(Public Key Infrastructure) Bootcamp](https://www.youtube.com/watch?v=q9vu6_2r0o4&list=PLDp2gaPHHZK-mnKi3Zy_-hRjqLHh5PaAv)
* [Wiki](https://en.wikipedia.org/wiki/Public_key_infrastructure)
## [Basic Cryptograhic Concepts:Public Keys, SSL Certificates, Hashing, SHA-2 : Matt Thomas](https://www.youtube.com/playlist?list=PL6TbWIxWsLY3XuAZB4C0_GxrR76TAZOf2)
## GRPC
* [Protocol Buffers Crash Course : Hussein Nasser](https://www.youtube.com/watch?v=46O73On0gyI)
* [gRPC Crash Course - Modes, Examples, Pros & Cons and more](https://www.youtube.com/watch?v=Yw4rkaTc0f8)
* [10000 Messages in 2.18 seconds with Python and gRPC : Sean Bradley](https://www.youtube.com/watch?v=dQK0VLahrDk)
## Socket Programming in C++
* [Socket Programming in C/C++ : Varteta Learning Platform](https://www.youtube.com/watch?v=bqj4dWG7v3c&list=PLhnN2F9NiVmAMn9iGB_Rtjs3aGef3GpSm)
* [Python Network Programming - TCP/IP Socket Programming : BuiltWithPython](https://www.youtube.com/watch?v=F5SabQHtgw4&list=PLhTjy8cBISErYuLZUvVOYsR1giva2payF&index=15)
## Redis In-Memory Database
* [Redis In-Memory Database : Hussein Nasser](https://www.youtube.com/watch?v=sVCZo5B8ghE&list=PLQnljOFTspQXNP6mQchJVP3S-3oKGEuw9&index=3)
## REST APIs:
* [REST APIs Prons & Cons : Hussesin Nasser](https://www.youtube.com/watch?v=M3XQ6yEC51Q&list=PLQnljOFTspQXNP6mQchJVP3S-3oKGEuw9&index=1)
## [How to set static IP in Ubuntu](https://linuxize.com/post/how-to-configure-static-ip-address-on-ubuntu-18-04/)
* _ip link_
* Change "/etc/netplan/01-netcfg.yaml"
    network:
      version: 2
      renderer: networkd
      ethernets:
        ens3:
        dhcp4: no
        addresses:
          - 192.168.121.199/24
        gateway4: 192.168.121.1
        nameservers:
            addresses: [8.8.8.8, 1.1.1.1]
* _sudo netplan apply_
* _ip addr show dev ens3_
