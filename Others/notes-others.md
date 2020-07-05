# [How to Setup SSH Keys](https://www.digitalocean.com/community/tutorials/how-to-set-up-ssh-keys--2#:~:text=%20How%20To%20Set%20Up%20SSH%20Keys%20,keys%20onto%20your%20server%20and%20ensured...%20More%20)
[Video](https://www.youtube.com/watch?v=hQWRp-FdTpc)
## Setup between Windows and Ubuntu
1) In Windows 10, run command "ssh-keygen", it creates 2 files: id_rsa and id_rsa.pub in the folder ".ssh"
2) Copy id_rsa.pub to ~/.ssh and rename it to "authorized_keys" in Ubuntu
3) In Windows, sshing into ubuntu by using "ssh david@192.168.64.129", it will not require your password
4) In Windows, copy file1 to ubuntu by using "scp file1 david@192.168.64.129:~/"
## Setup between Ubuntu and Github
1) In Ubuntu, run command "ssh-keygen -t rsa", add "_github" to the default file names, it creates 2 files: "id_rsa_github" and "id_rsa_github.pub" in the folder ".ssh"
2) Copy the content of "id_rsa_github.pub"
3) In github, go to "Settings" --> "SSH and GPG keys" --> "New SSH key", paste the content of "id_rsa_github.pub" into it, named it "Ubuntu Public Key", then click on "Add SSH key"
4) In ubuntu, cloning a repository "git clone  git@github.com:davidzheng66/notes.git" should not require password
5) If there is an error "Permission denied (publickey)", run the command "ssh-add /home/david/.ssh/id_rsa_github"
  * If there is an error "Could not open a connection to your authentication agent", run the command "eval `ssh-agent -s`", then run the command in 5) and 4)
  
