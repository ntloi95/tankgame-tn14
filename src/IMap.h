#ifndef __TANKGAME_IMAP__
#define __TANKGAME_IMAP__

#include <utility>

class IMap {
protected:
	virtual ~IMap() {}
public:
  const static std::pair<int, int> npos;
  
  // return the width (x-coordinate) of this map
	virtual int getWidth() const = 0;

  // return the height (y-coordinate) of this map
	virtual int getHeight() const = 0;

  virtual bool isOnMap(const std::pair<int,int>& pos) const = 0;

  // return the cell value as char at (x,y)
  // (0,0) is at the left-top corner
	virtual char operator()(int x, int y) const = 0;

  // return if the cell is on land, empty and can be occupied
  virtual bool isEmptySpace(int x, int y) const = 0;

  // return if the character is a presentation of empty space
  virtual bool isEmptySpace(char id) const = 0;

  // return if the cell is water
  virtual bool isWater(int x, int y) const = 0;

  // return if the character is a presentation of water
  virtual bool isWater(char id) const = 0;

  // return if the cell is a block
  virtual bool isBlock(int x, int y) const = 0;

  // return if the character is a presentation of a block
  virtual bool isBlock(char id) const = 0;

  // return if the cell is a bridge
  virtual bool isBridge(int x, int y) const = 0;

  // return if the character is a presentation of a bridge
  virtual bool isBridge(char id) const = 0;

  // return if the cell is a tank of player id
  virtual bool isTank(int x, int y, char playerId) const = 0;

  virtual bool isTank(int x, int y) const = 0;

  // return if the character is a presentation of a tank
  virtual bool isTank(char id) const = 0;

  // return if the cell is a headquarter of player id
  virtual bool isHeadquarter(int x, int y, char playerId) const = 0;

  // return if the cell is simply a headquarter
  virtual bool isHeadquarter(int x, int y) const = 0;

  // return if the character is a presentation of a headquarter
  virtual bool isHeadquarter(char id) const = 0;

  // return if the cell is a spring (a HP regen source)
  virtual bool isSpring(int x, int y) const = 0;

  // return if the character represents a spring (a HP regen source)
  virtual bool isSpring(char id) const = 0;
};

#endif