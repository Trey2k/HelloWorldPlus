
# HelloWorldPlus

**Table of contents:**
  * [Why?](#why?)
  * [Compiling](#compiling)
  * [How it works](#how-it-works)
  * [Contributing](#contributing)
  * [License](#license)

Why?
-------
Well, why not?

 
Compiling
-------
To compile this most useful program on windows you will need to install MinGW if using make, it will probably compile with MSVC too but has not been tested.
<br />
When compiling for linux it is as simple as installing ncurses on Debian based distro it would be as follows:
<br />
`sudo apt-get install libncurses5-dev libncursesw5-de`
<br />
For arch:
<br />
`pacman -S ncurses`
<br />
Others:
<br />
`Refer to google :P`
<br />

You will also need to have make and gcc installed. After that you can run make

How it works
-------
Well it prints hello world. In windows we use the Windows.h header for the windows API. And in Linux we use ncurses.

Contributing
-------
All contributions are welcome, if you would like to contribute submit a PR.

License
-------

This project is currently licensed under GPLv3. This means that you may use our source for your own project, so long as it
remains open source and is licensed under GPLv3.

Please refer to the [license](/LICENSE) file for more information.
