/*
  ==============================================================================

    WallComponent.cpp
    Created: 27 Dec 2022 5:28:55pm
    Author:  Neti

  ==============================================================================
*/

#include <JuceHeader.h>
#include "WallComponent.h"
using namespace juce;

//==============================================================================
WallComponent::WallComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

WallComponent::~WallComponent()
{
}

void WallComponent::paint (Graphics& g)
{
    Rectangle<float>wall(200, 200, 200, 120);
    g.fillCheckerBoard(wall, 20, 10, Colours::saddlebrown, Colours::sandybrown);
    g.drawRect(wall);
}

void WallComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
