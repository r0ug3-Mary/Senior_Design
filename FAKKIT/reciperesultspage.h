#ifndef RECIPERESULTSPAGE_H
#define RECIPERESULTSPAGE_H

#include <QDialog>

namespace Ui {
class RecipeResultsPage;
}

class RecipeResultsPage : public QDialog
{
    Q_OBJECT

public:
    explicit RecipeResultsPage(QWidget *parent = 0);
    ~RecipeResultsPage();

private:
    Ui::RecipeResultsPage *ui;
};

#endif // RECIPERESULTSPAGE_H
