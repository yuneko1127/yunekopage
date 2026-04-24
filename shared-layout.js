(function () {
    const isEnglishPage = document.documentElement.lang === 'en';
    const header = document.getElementById('site-header');
    const footer = document.getElementById('site-footer');

    const escapeHtml = (value) => String(value)
        .replace(/&/g, '&amp;')
        .replace(/</g, '&lt;')
        .replace(/>/g, '&gt;')
        .replace(/"/g, '&quot;')
        .replace(/'/g, '&#39;');

    const navItems = isEnglishPage ? [
        { href: 'en-index.html', label: 'About', key: 'about' },
        { href: '../poem.html', label: 'Code Poems', key: 'poem' },
        { href: '../graphics.html', label: 'Graphics', key: 'graphics' },
        { href: 'https://note.com/yu_neko', label: 'Blog', external: true },
        { href: 'https://suzuri.jp/yuneko_2004/home', label: 'Suzuri', external: true },
        { href: '../contact.html', label: 'Contact', key: 'contact' },
        { href: '../index.html', label: 'JP', key: 'jp' },
    ] : [
        { href: 'index.html', label: 'About', key: 'about' },
        { href: 'poem.html', label: 'Code Poems', key: 'poem' },
        { href: 'graphics.html', label: 'Graphics', key: 'graphics' },
        { href: 'https://note.com/yu_neko', label: 'Blog', external: true },
        { href: 'https://suzuri.jp/yuneko_2004/home', label: 'Suzuri', external: true },
        { href: 'contact.html', label: 'Contact', key: 'contact' },
        { href: 'en/en-index.html', label: 'EN', key: 'en' },
    ];

    if (header) {
        const title = header.dataset.title || '';
        const current = header.dataset.current || '';

        header.innerHTML = `
            <h1>${escapeHtml(title)}</h1>
            <nav>
                <ul>
                    ${navItems.map((item) => `
                        <li>
                            <a href="${item.href}"${item.external ? ' target="_blank" rel="noreferrer"' : ''}${item.key === current ? ' aria-current="page"' : ''}>${escapeHtml(item.label)}</a>
                        </li>
                    `).join('')}
                </ul>
            </nav>
        `;
    }

    if (footer) {
        footer.innerHTML = `<p>&copy; ${new Date().getFullYear()} ゆう猫</p>`;
    }
})();