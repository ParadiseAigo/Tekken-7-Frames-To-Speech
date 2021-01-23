# Tekken-7-Frames-To-Speech

Block any punishable move in Tekken 7 and an English speaking voice will tell you how minus it is exactly.

This is what a blocked minus 10 move will sound like: [example](https://raw.githubusercontent.com/ParadiseAigo/Tekken-7-Frames-To-Speech/master/Tekken-7-Frames-To-Speech/audio/mp3/10.mp3?token=AON5N5XVBSKOJPBLFYWX6FLABR2HO) (link does not open in a new tab).

## Installation
Download the executable [here (link not made yet)](https://putlinkhere.com) or you can build it yourself by loading the .sln file in Visual Studio.

## Usage
Run the executable before or after opening Tekken 7. Restart the program whenever you restart Tekken 7.

## Issues
* False positives: some moves that are very plus on hit will consistently activate the voice even though there is nothing to punish. This however is rare enough and is easy to identify and thus is only slightly annoying at worst.
* False negatives: some punishable moves can cause the next punishable move to go undetected by the program. This only happens in specific situations, usually when many punishable moves are blocked in succession by any player. Just be aware that false negatives are a thing in this program even though it is rare.
