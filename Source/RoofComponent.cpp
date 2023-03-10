/*
  ==============================================================================

    RoofComponent.cpp
    Created: 27 Dec 2022 6:03:42pm
    Author:  Neti

  ==============================================================================
*/

#include <JuceHeader.h>
#include "RoofComponent.h"
using namespace juce;

//==============================================================================
RoofComponent::RoofComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

RoofComponent::~RoofComponent()
{
}

void RoofComponent::paint (Graphics& g)
{
    g.setColour(Colours::firebrick);
    Path p;
    p.startNewSubPath(200,200);
    p.lineTo(400, 200);
    p.lineTo(300, 140);
    p.closeSubPath();

    g.strokePath(p, PathStrokeType(2));
    g.fillPath(p);
}

void RoofComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
