# Getting Started
You will required the Debin latest image compiled for Olimex Olinuxino A20 Micro. You can get one easily from [here.](ftp://staging.olimex.com/Allwinner_Images/A20-OLinuXino/)
    
Install the Image into the micro_SD card (16GB/32GB) using Balena Ether or Rufus tool. then put the SD card in Olinuxino A20 Micro Board.
Power the  board with 5V power Adapter

# Installing Essential tools

After you power-up the board, we need to install some tools required for embedded developement, for that we will required an active internet connection, connect the board to the internet through Ethernet Cable.

Now open the terminal. and type the following commands

1. Update the packages to  their latest version
```
 sudo apt update && sudo apt updgrade -y
```
2.Install tools & library

```
sudo apt install gpiod gpiod-dev build-essential
```
3. Detect which GPIO chip is active
```
gpiodetect
```
4. getdetailed info about active GPIO chip
```
gpioinfo gpiochipX
```
Replace the X fromgpiochipX with the active GPIO chip number detected using gpiodetect


