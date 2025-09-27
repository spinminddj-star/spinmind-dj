#include "PhraseAnalyzer.h"
std::vector<PhraseMarker> PhraseAnalyzer::analyze(const float*, std::size_t, int, double bpm){ std::vector<PhraseMarker> m; if(bpm<=0.0) return m; for(int i=0;i<16;i++){ m.push_back({i,i%8==7}); } return m;}
