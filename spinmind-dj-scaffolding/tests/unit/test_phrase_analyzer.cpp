#include "spinmind/analyzers/PhraseAnalyzer.h"
#include <cassert>
int main(){ PhraseAnalyzer p; auto res=p.analyze(nullptr,0,44100,128.0); assert(!res.empty()); return 0;}
