# FlowerPot
A basic RAT (Remote Administration Tool) meant for Linux machines.

# How to use
NOTE: THIS TOOL ONLY WORKS ON LINUX MACHINES. DO NOT TRY COMPILING MAIN.C FOR WINDOWS AS IT WILL NOT WORK.

So first we must open up `post.c` and replace `IP_HERE` with our own IP address.
![image](https://user-images.githubusercontent.com/78043996/120229089-6850dc00-c21a-11eb-9244-488b4df339d5.png)

Then, we must compile it. Simply do `gcc -o post post.c`. And now, you should be ready to go.

Now we will start up our `main` file. To run it, do `./main`. Then use the `listener` command to start up a listener. Then, send the file to your victim and convince them to execute it.

Now there are multiple different ways to execute a file. On most linux distros you can double click on the file and it will ask you if you're sure you want to execute it, and if you click yes, the file will be executed in the background. But you can also execute it via the command line by doing `./post`. This is not recommended because you will lose the connection between you and your victim when they close their terminal.

Now lets execute the file on the target machine.
![image](https://user-images.githubusercontent.com/78043996/120230028-74d63400-c21c-11eb-93ca-3a079cad0366.png)

Now as you can see, we got a connection! So now we are able to have some fun. We now have a post-exploitation framework loaded right after we get a connection. Now we can pretty much do whatever we want.
![image](https://user-images.githubusercontent.com/78043996/120230210-db5b5200-c21c-11eb-8806-89f8b8a8ace9.png)

# How does it work?
Well, it's actually extremely simple.

Once the listener has started and the target has executed the file, it will use `curl` to download the post-exploitation framework, and then when we got our connection, the first thing that it loads is the framework, so now we have all these options for controlling and gathering information about the machine we just got access to.

# Screenshots
![image](https://user-images.githubusercontent.com/78043996/120229700-a7336180-c21b-11eb-8704-785e3fe6b539.png)

# Credits
[https://github.com/0x1CA3]
