19       	 <--SHAPES
21       	 <--LINES
id1
2       	 <--TYPE
348       	 <--LEFT
59       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
2       	 <--TYPE
817       	 <--LEFT
597       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id11
0       	 <--TYPE
329       	 <--LEFT
237       	 <--TOP
107       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MODULE
n
10
last
id3
91       	 <--TYPE
316       	 <--LEFT
168       	 <--TOP
135       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
Enter a number : 
n

id7
92       	 <--TYPE
326       	 <--LEFT
348       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_EQUAL
t
0

id8
0       	 <--TYPE
347       	 <--LEFT
294       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DIVINT
n
10
t
id9
91       	 <--TYPE
772       	 <--LEFT
502       	 <--TOP
158       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
swapped number = 
str

id10
0       	 <--TYPE
519       	 <--LEFT
358       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DEFINITION
n
t
r
id4
3       	 <--TYPE
673       	 <--LEFT
303       	 <--TOP
10       	 <--WIDTH
10       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INTERSECTION



id5
0       	 <--TYPE
346       	 <--LEFT
444       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DEFINITION
first
n

id6
91       	 <--TYPE
307       	 <--LEFT
592       	 <--TOP
151       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
swapped number = 
n

id12
0       	 <--TYPE
347       	 <--LEFT
109       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DEFINITION
str
""

id13
92       	 <--TYPE
325       	 <--LEFT
497       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_EQUAL
first
last

id14
0       	 <--TYPE
520       	 <--LEFT
507       	 <--TOP
95       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
JOIN
last
str
str
id15
0       	 <--TYPE
648       	 <--LEFT
507       	 <--TOP
95       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
JOIN
str
first
str
id16
0       	 <--TYPE
518       	 <--LEFT
419       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DIVINT
n
10
s
id17
92       	 <--TYPE
623       	 <--LEFT
410       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_EQUAL
s
0

id18
0       	 <--TYPE
818       	 <--LEFT
292       	 <--TOP
79       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
JOIN
r
str
str
id19
0       	 <--TYPE
812       	 <--LEFT
419       	 <--TOP
91       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MODULE
n
10
r
  
---- LINES ---- from,to ----
id3,id11
reserved 1

id11,id8
reserved 1

id8,id7
reserved 1

id7,id5
reserved 1
EVET
id1,id12
reserved 1

id12,id3
reserved 1

id5,id13
reserved 1

id13,id6
reserved 1
EVET
id6,id2
reserved 1

id13,id14
reserved 1
HAYIR
id14,id15
reserved 1

id15,id9
reserved 1

id9,id2
reserved 1

id7,id10
reserved 1
HAYIR
id10,id16
reserved 1

id16,id17
reserved 1

id17,id4
reserved 1
EVET
id4,id8
reserved 1

id17,id19
reserved 1
HAYIR
id19,id18
reserved 1

id18,id4
reserved 1

