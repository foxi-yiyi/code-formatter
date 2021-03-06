/**
 * Copyright (C) 2019 SardineFish
 * 
 * This file is part of code-formatter.
 * 
 * code-formatter is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * code-formatter is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with code-formatter.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * C-like Source Code Example
 *
 * Generated by SardineFish
 */

// Global variable
int a=0,b=5;long l=0x8000000L;float f=0.00f;
void foo(char*x,int y){
// The Bock body
*(int*)x+=x[y+5];
for (int i=0; i<y;i++){
if(!(i <= 0.5)){
switch (i){
case 0: ++i; break;
case 100: i += 2; break;
default: i *= 2; break;
}
}
else if (i > 1e16) continue;
else 
if(i) return;
}
do {
while(1) loop(&x);
} while(0);
return;
}

int main(){
printf("Hello World!\n");
}