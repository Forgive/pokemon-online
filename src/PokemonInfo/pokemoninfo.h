#ifndef POKEMONINFO_H
#define POKEMONINFO_H

#include "pokemonstructs.h"

class PokeBaseStats;
class QPixmap;

/* A class that should be used as a singleton and provide every ressource needed on pokemons */
class PokemonInfo
{
private:
    static QStringList m_Names;
    static QString m_Directory;

    static void loadNames();
    static QList<int> getMoves(const QString &filename, int Pokenum);
    static QString path(const QString &filename);
public:

    /* directory where all the data is */
    static void init(const QString &dir="./");

    /* Self-explainable functions */
    static int NumberOfPokemons();
    static QString Name(int pokenum);
    static int Number(const QString &pokename);
    static int Gender(int pokenum);
    static QPixmap Picture(int pokenum, int gender = Pokemon::Male, bool shiney = false);
    static QIcon Icon(int index);
    static QList<int> Moves(int pokenum);
    static QList<int> EggMoves(int pokenum);
    static QList<int> LevelMoves(int pokenum);
    static QList<int> TutorMoves(int pokenum);
    static QList<int> TMMoves(int pokenum);
    static QList<int> SpecialMoves(int pokenum);
    static PokeBaseStats BaseStats(int pokenum);
    static QList<int> Abilities(int pokenum);
};

class MoveInfo
{
private:
    static QStringList m_Names;
    static QString m_Directory;

    static void loadNames();
    static QString path(const QString &filename);
public:
    /* directory where all the data is */
    static void init(const QString &dir="./");

    /* Self-explainable functions */
    static QString Name(int movenum);
    static int Type(int movenum);
    static int Category(int movenum);
    static int Number(const QString &movename);
    static int NumberOfMoves();
    static QString Description(int movenum);
    static int Power(int movenum);
    /* gives the power of a move in the form of a string */
    static QString PowerS(int movenum);
    static int PP(int movenum);
    /* gives the power of a move in the form of a string */
    static QString AccS(int movenum);
};

class ItemInfo
{
private:
    static QStringList m_Names;
    static QStringList m_SortedNames;
    static QString m_Directory;

    static void loadNames();
    static QString path(const QString &filename);
public:
    /* directory where all the data is */
    static void init(const QString &dir="./");

    /* Self-explainable functions */
    static int NumberOfItems();
    static QString Name(int itemnum);
    static QStringList Names();
    static QStringList SortedNames();
    static int Number(const QString &itemname);
    /* returns the number corresponding to the name, but with the sortedNames as a ref */
    static int SortedNumber(const QString &itemname);
    static QString Description(int itemnum);
    static int Power(int itemnum);
};

class TypeInfo
{
private:
    static QStringList m_Names;
    static QString m_Directory;
    static QList<QColor> m_Colors;

    static void loadNames();
    static void loadColors();
    static QString path(const QString &filename);
public:
    /* directory where all the data is */
    static void init(const QString &dir="./");

    /* Self-explainable functions */
    static QString Name(int typenum);
    static QColor Color(int typenum);
    static int NumberOfTypes();
};

class NatureInfo
{
private:
    static QStringList m_Names;
    static QString m_Directory;
    static void loadNames();
    static QString path(const QString &filename);
public:
    /* directory where all the data is */
    static void init(const QString &dir="./");

    /* Self-explainable functions */
    static QString Name(int naturenum);
    static int NumberOfNatures();

    /* -1 if the nature is hindering, 0 if neutral and 1 if it boosts that stat */
    static int Boost(int nature, int stat);
};

class CategoryInfo
{
private:
    static QStringList m_Names;
    static QString m_Directory;
    static QList<QColor> m_Colors;

    static void loadNames();
    static void loadColors();
    static QString path(const QString &filename);
public:
    /* directory where all the data is */
    static void init(const QString &dir="./");

    /* Self-explainable functions */
    static QString Name(int catnum);
    static QColor Color(int catnum);
    static int NumberOfCategories();
};

class AbilityInfo
{
private:
    static QStringList m_Names;
    static QString m_Directory;

    static void loadNames();
    static QString path(const QString &filename);
public:
    /* directory where all the data is */
    static void init(const QString &dir="./");

    /* Self-explainable functions */
    static QString Name(int abnum);
    static int NumberOfAbilities();
};

class GenderInfo
{
private:
    static QStringList m_Names;
    static QString m_Directory;
    static QList<QPixmap> m_Pictures;

    static void loadNames();
    static void loadPixmaps();
    static QString path(const QString &filename);
public:
    /* directory where all the data is */
    static void init(const QString &dir="./");

    /* Self-explainable functions */
    static QString Name(int gender);
    static int NumberOfGenders();
    static QPixmap Picture(int gender);
};


class HiddenPowerInfo
{
private:
    static QString m_Directory;

    static QString path(const QString &filename);
public:
    /* directory where all the data is */
    static void init(const QString &dir="./");

    /* The type of the hidden power depending on the dvs */
    static int Type(quint8 hpdv, quint8 attdv, quint8 defdv, quint8 spddv, quint8 sattdv, quint8 sdefdv);
    /* The power of the hidden power depending on the dvs */
    static int Power(quint8 hpdv, quint8 attdv, quint8 defdv, quint8 spddv, quint8 sattdv, quint8 sdefdv);
    /* the different set of dvs (which are chosen within 30-31) that give an hidden power of that type */
    static QList<QStringList> PossibilitiesForType(int type);
};

#endif // POKEMONINFO_H
