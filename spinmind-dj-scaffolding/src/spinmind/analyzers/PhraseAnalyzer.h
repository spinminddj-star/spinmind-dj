#pragma once
#include <vector>
struct PhraseMarker { int barIndex; bool isDropZone; }; class PhraseAnalyzer{ public: std::vector<PhraseMarker> analyze(const float* audio, std::size_t frames,int sampleRate,double bpm);};
