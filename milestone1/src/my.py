
o = int(input())
s=input()
f=open('les.txt','w')
if o==1:
    f.write(s+".opt:\n  "+s+"\n| /*empty*/\n;")
else:
    f.write(s+".multiopt:\n  "+s+".multiopt "+s+"\n| /*empty*/\n;")


