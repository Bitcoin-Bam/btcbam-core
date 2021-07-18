#ifndef BTCBAMPUSHBUTTON_H
#define BTCBAMPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class BitcoinbamPushButton : public QPushButton
{
public:
    explicit BitcoinbamPushButton(QWidget * parent = Q_NULLPTR);
    explicit BitcoinbamPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // BTCBAMPUSHBUTTON_H
