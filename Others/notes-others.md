## 1. [How to make the perfect Readme.md on GitHub](https://medium.com/swlh/how-to-make-the-perfect-readme-md-on-github-92ed5771c061)
## 2. [How to Setup SSH Keys](https://www.digitalocean.com/community/tutorials/how-to-set-up-ssh-keys--2#:~:text=%20How%20To%20Set%20Up%20SSH%20Keys%20,keys%20onto%20your%20server%20and%20ensured...%20More%20)
* [Video](https://www.youtube.com/watch?v=hQWRp-FdTpc)
* _ssh -i ~/.ssh/id_ecg root@192.168.10.100_
* _scp -i ~/.ssh/id_ecg_ source.file _root@192.168.10.100:/tmp_ (target.folder)
## 3. Setup between Windows and Ubuntu
1) In Windows 10, run command "ssh-keygen", it creates 2 files: id_rsa and id_rsa.pub in the folder ".ssh"
2) Copy id_rsa.pub to ~/.ssh and rename it to "authorized_keys" in Ubuntu
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
## 8. [Git Tutorial](https://en.wikipedia.org/wiki/Git))
* [Command Line Fundmentals](https://www.youtube.com/watch?v=HVsySz-h9r4&list=PL-osiE80TeTuRUfjRe54Eea17-YfnOOAx&index=1)
* [Fixing Common Mistakes and Undo Bad Committs](https://www.youtube.com/watch?v=FdZecVxzJbk&list=PL-osiE80TeTuRUfjRe54Eea17-YfnOOAx&index=2)
