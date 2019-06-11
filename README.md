## Install instructions
1. Clone repository```$ git clone https://github.com/gitguuddd/Obj_5.git```
2. Compile program by using CMakeLists.txt file
3. Launch the program
## About the program
This program is used to read text files and to check how often and where in the text are unique words used. This program is also capable of detecting URL's.
## v2.0 Test example and test results
```
“I’ll do it,” snarled Fenrir, moving toward Dumbledore with his
hands outstretched, his teeth bared.
“I said no!” shouted the brutal-faced man; there was a flash of
light and the werewolf was blasted out of the way; he hit the ramparts and staggered, looking furious. Harry’s heart was hammering
so hard it seemed impossible that nobody could hear him standing
there, imprisoned by Dumbledore’s spell — if he could only move,
he could aim a curse from under the cloak —
“Draco, do it or stand aside so one of us —” screeched the www.urbandictionary.com/define.php?term=Snape%20Kills%20Dumbledore
woman, but at that precise moment, the door to the ramparts burst
open once more and there stood Snape, his wand clutched in his
hand as his black eyes swept the scene, from Dumbledore slumped
against the wall, to the four Death Eaters, including the enraged
werewolf, and Malfoy.
“We’ve got a problem, Snape,” said the lumpy Amycus, whose
eyes and wand were fixed alike upon Dumbledore, “the boy doesn’t
seem able —”
But somebody else had spoken Snape’s name, quite softly.
“Severus . . .”
The sound frightened Harry beyond anything he had experienced all evening. For the first time, Dumbledore was pleading.
Snape said nothing, but walked forward and pushed Malfoy
roughly out of the way. The three Death Eaters fell back without a
word. Even the werewolf seemed cowed.
https://www.nbcnews.com/think/opinion/dumbledore-gay-why-j-k-rowling-s-continual-character-revisionism-ncna986726
Snape gazed for a moment at Dumbledore, and there was revulsion and hatred etched in the harsh lines of his face.
“Severus . . . please . . .”
Snape raised his wand and pointed it directly at Dumbledore.
```
The output cross_reference table will look like this:
```
########################WORDS########################
com occurs 2 time/s in lines:   8 23
death occurs 2 time/s in lines:   12 21
do occurs 2 time/s in lines:   1 8
eaters occurs 2 time/s in lines:   12 21
eyes occurs 2 time/s in lines:   11 15
for occurs 2 time/s in lines:   19 24
from occurs 2 time/s in lines:   7 11
had occurs 2 time/s in lines:   17 19
harry occurs 2 time/s in lines:   4 19
i occurs 2 time/s in lines:   1 3
in occurs 2 time/s in lines:   10 24
malfoy occurs 2 time/s in lines:   13 20
moment occurs 2 time/s in lines:   9 24
out occurs 2 time/s in lines:   4 21
ramparts occurs 2 time/s in lines:   4 9
seemed occurs 2 time/s in lines:   5 22
severus occurs 2 time/s in lines:   18 25
so occurs 2 time/s in lines:   5 8
that occurs 2 time/s in lines:   5 9
to occurs 2 time/s in lines:   9 12
way occurs 2 time/s in lines:   4 21
www occurs 2 time/s in lines:   8 23
at occurs 3 time/s in lines:   9 24 26
but occurs 3 time/s in lines:   9 17 20
could occurs 3 time/s in lines:   5 6 7
s occurs 3 time/s in lines:   4 6 17
said occurs 3 time/s in lines:   3 14 20
wand occurs 3 time/s in lines:   10 15 26
werewolf occurs 3 time/s in lines:   4 13 22
he occurs 4 time/s in lines:   4 6 7 19
it occurs 4 time/s in lines:   1 5 8 26
there occurs 4 time/s in lines:   3 6 10 24
a occurs 5 time/s in lines:   3 7 14 21 24
of occurs 5 time/s in lines:   3 4 8 21 24
was occurs 5 time/s in lines:   3 4 19 24
dumbledore occurs 7 time/s in lines:   1 6 11 15 19 24 26
his occurs 7 time/s in lines:   1 2 10 11 24 26
snape occurs 7 time/s in lines:   8 10 14 17 20 24 26
and occurs 9 time/s in lines:   4 10 13 15 20 24 26
the occurs 20 time/s in lines:   3 4 7 8 9 11 12 14 15 19 21 22 24
########################LINKS########################
https://www.nbcnews.com/think/opinion/dumbledore-gay-why-j-k-rowling-s-continual-character-revisionism-ncna986726
www.urbandictionary.com/define.php?term=Snape%20Kills%20Dumbledore
```
## v1.0 Test example and test results
Given that input text looks like this:
```
“I’ll do it,” snarled Fenrir, moving toward Dumbledore with his
hands outstretched, his teeth bared.
“I said no!” shouted the brutal-faced man; there was a flash of
light and the werewolf was blasted out of the way; he hit the ramparts and staggered, looking furious. Harry’s heart was hammering
so hard it seemed impossible that nobody could hear him standing
there, imprisoned by Dumbledore’s spell — if he could only move,
he could aim a curse from under the cloak —
“Draco, do it or stand aside so one of us —” screeched the 
woman, but at that precise moment, the door to the ramparts burst
open once more and there stood Snape, his wand clutched in his
hand as his black eyes swept the scene, from Dumbledore slumped
against the wall, to the four Death Eaters, including the enraged
werewolf, and Malfoy.
“We’ve got a problem, Snape,” said the lumpy Amycus, whose
eyes and wand were fixed alike upon Dumbledore, “the boy doesn’t
seem able —”
But somebody else had spoken Snape’s name, quite softly.
“Severus . . .”
The sound frightened Harry beyond anything he had experienced all evening. For the first time, Dumbledore was pleading.
Snape said nothing, but walked forward and pushed Malfoy
roughly out of the way. The three Death Eaters fell back without a
word. Even the werewolf seemed cowed.
Snape gazed for a moment at Dumbledore, and there was revulsion and hatred etched in the harsh lines of his face.
“Severus . . . please . . .”
Snape raised his wand and pointed it directly at Dumbledore. 
```
The output cross-reference table will look like this:
```
########################WORDS########################
a occurs 5 time/s in lines:   3 7 14 21 23
and occurs 9 time/s in lines:   4 4 10 13 15 20 23 23 25
at occurs 3 time/s in lines:   9 23 25
but occurs 3 time/s in lines:   9 17 20
could occurs 3 time/s in lines:   5 6 7
death occurs 2 time/s in lines:   12 21
do occurs 2 time/s in lines:   1 8
dumbledore occurs 7 time/s in lines:   1 6 11 15 19 23 25
eaters occurs 2 time/s in lines:   12 21
eyes occurs 2 time/s in lines:   11 15
for occurs 2 time/s in lines:   19 23
from occurs 2 time/s in lines:   7 11
had occurs 2 time/s in lines:   17 19
harry occurs 2 time/s in lines:   4 19
he occurs 4 time/s in lines:   4 6 7 19
his occurs 7 time/s in lines:   1 2 10 10 11 23 25
i occurs 2 time/s in lines:   1 3
in occurs 2 time/s in lines:   10 23
it occurs 4 time/s in lines:   1 5 8 25
malfoy occurs 2 time/s in lines:   13 20
moment occurs 2 time/s in lines:   9 23
of occurs 5 time/s in lines:   3 4 8 21 23
out occurs 2 time/s in lines:   4 21
ramparts occurs 2 time/s in lines:   4 9
s occurs 3 time/s in lines:   4 6 17
said occurs 3 time/s in lines:   3 14 20
seemed occurs 2 time/s in lines:   5 22
severus occurs 2 time/s in lines:   18 24
snape occurs 6 time/s in lines:   10 14 17 20 23 25
so occurs 2 time/s in lines:   5 8
that occurs 2 time/s in lines:   5 9
the occurs 20 time/s in lines:   3 4 4 4 7 8 9 9 11 12 12 12 14 15 19 19 21 21 22 23
there occurs 4 time/s in lines:   3 6 10 23
to occurs 2 time/s in lines:   9 12
wand occurs 3 time/s in lines:   10 15 25
was occurs 5 time/s in lines:   3 4 4 19 23
way occurs 2 time/s in lines:   4 21
werewolf occurs 3 time/s in lines:   4 13 22
########################LINKS########################
```
## Changelog
---
### [v2.0](https://github.com/gitguddd/Obj_5/releases/tag/v2.0) (2019-06-11)
**Added**
- exam tasks (1 and 2)

**Known bugs**
- same as v [1.0]
---
### [v1.0](https://github.com/gitguuddd/Obj_5/releases/tag/v1.0) (2019-06-11)
**Added**
- Initial files ```main.cpp, funcs.h, funcs.cpp, Wordinfo.cpp, Wordinfo.h```
- README file

**Known bugs**
- Regex pattern, which is used to search for words, seems to have problems with reading words that have apostrophes.
- The same pattern sometimes includes www's, which belong to the URL's in the text, into the Words section of the cross-reference output file 
---
