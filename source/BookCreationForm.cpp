#include "BookCreationForm.h"

BookCreationForm::BookCreationForm(QWidget *parent) : ItemCreationForm(parent)
{
    authorInput = new QLineEdit();
    languageInput = new QLineEdit();
    numPagesInput = new QLineEdit();
    numChaptersInput = new QLineEdit();

    formLayout->addRow("Autore", authorInput);
    formLayout->addRow("Lingua", languageInput);
    formLayout->addRow("Numero di Pagine", numPagesInput);
    formLayout->addRow("Numero di Capitoli", numChaptersInput);
}

QString BookCreationForm::getAuthor() const { return authorInput->text(); }
QString BookCreationForm::getLanguage() const { return languageInput->text(); }
int BookCreationForm::getNumPages() const { return numPagesInput->text().toInt(); }
int BookCreationForm::getNumChapters() const { return numChaptersInput->text().toInt(); }
QMap<QString, QVariant> BookCreationForm::getNotDefaultFields() const
{
    QMap<QString, QVariant> fieldToRead;
    fieldToRead["Autore"] = getAuthor();
    fieldToRead["Lingua"] = getLanguage();
    fieldToRead["Numero di Pagine"] = getNumPages();
    fieldToRead["Numero di Capitoli"] = getNumChapters();
    return fieldToRead;
}

void BookCreationForm::setAuthor(const QString &newAuthor) { authorInput->setText(newAuthor); }
void BookCreationForm::setLanguage(const QString &newLanguage) { languageInput->setText(newLanguage); }
void BookCreationForm::setNumPages(int newNumPages) { numPagesInput->setText(QString::number(newNumPages)); }
void BookCreationForm::setNumChapters(int newNumChapters) { numChaptersInput->setText(QString::number(newNumChapters)); }

void BookCreationForm::setNotDefaultFields(const QMap<QString, QVariant> &fieldsToAdd)
{
    if (fieldsToAdd.contains("Autore"))
        setAuthor(fieldsToAdd["Autore"].toString());
    if (fieldsToAdd.contains("Lingua"))
        setLanguage(fieldsToAdd["Lingua"].toString());
    if (fieldsToAdd.contains("Numero di Pagine"))
        setNumPages(fieldsToAdd["Numero di Pagine"].toInt());
    if (fieldsToAdd.contains("Numero di Capitoli"))
        setNumChapters(fieldsToAdd["Numero di Capitoli"].toInt());
}

void BookCreationForm::clearFields()
{
    titleInput->clear();
    yearInput->clear();
    coverImageInput->clear();
    authorInput->clear();
    languageInput->clear();
    numPagesInput->clear();
    numChaptersInput->clear();
}

void BookCreationForm::accept(FormVisitor &visitor)
{
    visitor.visitBookForm(*this);
}

void BookCreationForm::accept(FormConstVisitor &constVisitor) const
{
    constVisitor.visitBookForm(*this);
}