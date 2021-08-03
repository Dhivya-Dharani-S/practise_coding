int designerPdfViewer(vector<int> h, string word) {
int length=word.length();
int height=-1;
for(int i=0;i<length;i++){
if(h[word[i]-'a'] > height)
   height = h[word[i]-'a'];
    }
    return length*height;
}
