/*
  ==============================================================================

    SunComponent.cpp
    Created: 29 Dec 2022 12:13:20pm
    Author:  Neti

  ==============================================================================
*/

#include <JuceHeader.h>
#include "SunComponent.h"
using namespace juce;

//==============================================================================
SunComponent::SunComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

SunComponent::~SunComponent()
{
}

void SunComponent::paint (Graphics& g)
{
    SunComponent s;
    g.setColour(Colours::yellow);
    g.drawEllipse(400, 50, 50, 50, 10);
    g.fillEllipse(400, 50, 50, 50);
}

void SunComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
