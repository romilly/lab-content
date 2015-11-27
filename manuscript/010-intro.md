

{frontmatter}

Life after Blink
================

Who should read this book
-------------------------

This book is written for people with some programming experience who want to explore the Arduino.

You should read this book if you want to learn how to

- connect your Arduino to buttons, buzzers, LEDs and other devices
- write programs to control the hardware you've attached
- connect your Arduino to another computer, like a laptop or a Raspeberry Pi.


Background
------------

The Arduino is everywhere. It was developed for artists, designers and other creative people who needed smart hardware
but had non-technical backgrounds. It's done well in that market but it's also used by hobbyists, product developers,
learners and educators. People love its simplicity and power.

Even though the Arduino is easy to use once you know it well, it can be hard to make a start. Many people run the
**Blink** example and wonder what to do next. There are probably many thousands of Arduinos languishing on the shelf
because their owners aren't sure what to do next.

That's what this e-book is all about.

You can use the book for self-study or as the text for an instructor-led workshop.

Here's what you will need for the experiments in the book.


Prerequisites
-------------

### Arduino

You will need an Arduino or clone and a means of programming it.

Many people will use an Arduino UNO R3, but earlier versions of the
Arduino are fine, as is the UNO's big brother, the Mega2560.

You can also use a Shrimp (an inexpensive self-built clone).

You can find out how to build a Shrimp in
[another e-book](https://leanpub.com/makingtheshrimp)

The following are **not** appropriate for the experiments, though they are
fine for their intended applications:

-   Arduino nano
-   Arduino Due
-   Arduino Tre
-   Arduino Yun
-   Arduino Galileo
-   Arduino mini/pro mini
-   teensy
-   LillyPad

The course assumes that you have uploaded and modified the standard
Arduino *blink* sketch. If you haven't done that yet, you should do so
before you start this e-book.

If you have an Arduino, you will need a USB cable and you will need to
install the Arduino IDE on your computer. Depending on what operating
system you are using, you may also have to install a driver - a piece of
software that will enable your computer to talk to the Arduino.

You need to have uploaded and modified the standard Arduino
*blink* sketch.

If you've had experience of writing programs that will help but it's not essential.

You will find detailed instructions on setup and software installation
[here](http://www.ladyada.net/learn/arduino/lesson0.html)  and a
tutorial to help you upload the blink sketch
[here](http://www.ladyada.net/learn/arduino/lesson1.html).

If you have built and tested a [Shrimp](http://shrimping.it/blog/blink/) you will already have the relevant software
installed, and you will have uploaded the blink sketch.

### Parts


Some of the experiments need extra components. The compnents should cost about £10/$16.

See below for information about what you'll need and how to order it.

You may have some components already, in which case you will only need to get the
ones you don't have.

W> The Light Emitting Diodes (LEDs) used in the experiments are special.
*If you use ordinary LEDs* **you will burn them out and could damage your Arduino**!

The first two experiments in the course don't need extra hardware so you can start on them right away.

Alternatively you can [buy a complete kit from SK
Pang.](http://skpang.co.uk/catalog/arduino-life-after-blink-kit-p-1341.html)

![Course Kit](images/ecourse-kit.JPG)

#### The Kit

The kit contains the parts you need:

-   400 point breadboard
-   75 jump wires
-   8 \* 5mm 5V LEDs
-   5V Piezo buzzer
-   PCB-mounting pushbutton (NO).
-   LDR (about 5K ohms in daylight)
-   resistors: 2 \* 10K Ohm

W> The 5v Light Emitting Diodes (LEDs) in the kit are special. They have a built-in resistor to limit the current though
them. *If you use ordinary LEDs* **you will burn them out and could damage your Arduino**!

Appendix A (Hardware) contains ordering details and information about suppliers.

Experiments
-----------

There are 5 different experiments:

1.  Fortune Cookie server
2.  Morse flasher
3.  Counter/LED ripple
4.  Button and Buzzer
5.  LDR (photocell) and bar level indicator. (There are three parts to this experiment.)

Some have extra activities to do if you want. They all
use the components listed above.

You can use some of the experiment as the basis of more ambitious projects.

## Before you start

You may want to remind yourself of the key parts to an Arduino sketch. You'll find a review of the Blink sektch and
the process of compiling and uploading in Appendix C.

If you hit problems
-------------------

You may have questions or feedback as you work through the book.

You can use the dedicated Google support forum at https://groups.google.com/forum/#!forum/life-after-blink.

Have fun!

Best regards,  Romilly
