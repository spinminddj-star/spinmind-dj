#include "SpinMindPanel.h"
#include <QLabel>
SpinMindPanel::SpinMindPanel(QWidget* parent): QDockWidget("SpinMind", parent){ auto* body=new QWidget(this); auto* label=new QLabel("SpinMind Panel — coming soon", body); setWidget(body);}